namespace offsets {
	// global
	uint64_t uworld_key = 0x88534B8; 
	uint64_t uworld_state = 0x8853480;
	uint64_t line_of_sight = 0x44DBC90;
	uint64_t bone_matrix = 0x44A4340;
	
	// world
	uint64_t persistent_level = 0x38;
	uint64_t game_instance = 0x1A8;

	// player
	uint64_t localplayers_array = 0x40;
	uint64_t localplayer = 0x40;
	uint64_t player_controller = 0x38;
	uint64_t apawn = 0x460;

	// vector
	uint64_t root_component = 0x230;
	uint64_t position = 0x164;
	uint64_t rotation = 0x170;
	
	// controllers
	uint64_t damage_controller = 0x9A8;
	uint64_t camera_controller = 0x440;
	
	// camera
	uint64_t camera_position = 0x1240;
	uint64_t camera_rotation = 0x124C;
	uint64_t camera_fov = 0x1258;
	uint64_t camera_manager = 0x478;


	// level > actors
	uint64_t actor_array = 0xA0;
	uint64_t actors_count = 0xB8;

	// level > actors info
	uint64_t actor_id = 0x18;
	uint64_t unique_id = 0x38;
	uint64_t team_component = 0x628;
	uint64_t team_id = 0xF8;
	uint64_t health = 0x1B0;
	uint64_t dormant = 0x100;
	uint64_t player_state = 0x3F0;

	// mesh
	uint64_t mesh = 0x430;
	uint64_t component_to_world = 0x250;
	uint64_t bone_array = 0x558;
	uint64_t bone_count = 0x560;
}
