#include <igl/read_triangle_mesh.h>
#include <igl/write_triangle_mesh.h>
#include <igl/copyleft/cork/mesh_boolean.h>

int main(int argc, char * argv[])
{
  Eigen::MatrixXd VA,VB,VC;
  Eigen::MatrixXi FA,FB,FC;
  igl::read_triangle_mesh(argv[1],VA,FA);
  igl::read_triangle_mesh(argv[2],VB,FB);
  igl::copyleft::cork::mesh_boolean(VA,FA,VB,FB,igl::MeshBooleanType::MESH_BOOLEAN_TYPE_UNION,VC,FC);
  igl::write_triangle_mesh(argv[3],VC,FC);
  return 0;
}
