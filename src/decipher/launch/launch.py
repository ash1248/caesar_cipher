import os
from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
	ld = LaunchDescription()
	
	config = os.path.join( 
		get_package_share_directory('decipher'),
		'config',
		'params.yaml'
	)
	
	listener_node = Node (
		package = "decipher",
		executable = "listener",
		name = "decipher_node",
		parameters = [config]
	)
	
	ld.add_action(listener_node)
	return ld
	

