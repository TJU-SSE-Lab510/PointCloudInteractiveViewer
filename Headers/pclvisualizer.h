//
// Created by Summer on 12/02/2018.
//

#ifndef PCLDEMO_PCLVISUALIZER_H
#define PCLDEMO_PCLVISUALIZER_H

#include <vtkAutoInit.h>
VTK_MODULE_INIT(vtkRenderingOpenGL2);
VTK_MODULE_INIT(vtkInteractionStyle);

#include <QtWidgets/QMainWindow>
#include <pcl/io/pcd_io.h>
#include <pcl/point_types.h>
#include <pcl/visualization/pcl_visualizer.h>
#include "ui_pclvisualizer.h"

class PCLVisualizer : public QMainWindow
{
    Q_OBJECT
public:
    PCLVisualizer(QWidget *parent = 0);
    ~PCLVisualizer();

private:
    Ui::PCLVisualizer ui;
    //点云数据存储
    pcl::PointCloud<pcl::PointXYZ>::Ptr cloud;
    boost::shared_ptr<pcl::visualization::PCLVisualizer> viewer;

    //初始化vtk部件
    void initialVtkWidget();

    private slots:
    //创建打开槽
    void onOpen();
};


#endif //PCLDEMO_PCLVISUALIZER_H
