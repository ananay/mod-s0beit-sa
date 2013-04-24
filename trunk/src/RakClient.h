/* 
 * PROJECT: mod_sa
 * COPYRIGHT: FYP
 * DATE: 21.02.2013
 * FILE: RakClient.h
*/

extern class RakClient *g_RakClient;

typedef unsigned int RakNetTime;
typedef long long RakNetTimeNS;

enum RPCEnumeration
{
	RPC_ServerJoin = 152,
	RPC_ServerQuit = 153,
	RPC_InitGame = 154,
	RPC_ClientJoin = 0x18,
	RPC_NPCJoin = 0xD,
	RPC_Death = 0x0C,
	RPC_RequestClass = 0x8A,
	RPC_RequestSpawn = 0x8B,
	RPC_SetInteriorId = 0x75,
	RPC_Spawn = 0x0B,
	RPC_Chat = 0x66,
	RPC_EnterVehicle = 0x19,
	RPC_ExitVehicle = 0x1A,
	RPC_DamageVehicle = 0x27,
	RPC_MenuSelect = 0x19,
	RPC_MenuQuit = 0x9B,
	RPC_ScmEvent = 0x90,
	RPC_AdminMapTeleport = 255,
	RPC_WorldPlayerAdd = 92,
	RPC_WorldPlayerDeath = 38,
	RPC_WorldPlayerRemove = 35,
	RPC_WorldVehicleAdd = 36,
	RPC_WorldVehicleRemove = 37,
	RPC_SetCheckpo= 255,
	RPC_DisableCheckpo= 255,
	RPC_SetRaceCheckpo= 255,
	RPC_DisableRaceCheckpo= 255,
	RPC_UpdateScoresPingsIPs = 0x1B,
	RPC_SvrStats = 255,
	RPC_GameModeRestart = 100,
	RPC_ConnectionRejected = 13,
	RPC_ClientMessage = 141,
	RPC_WorldTime = 106,
	RPC_Pickup = 255,
	RPC_DestroyPickup = 255,
	RPC_DestroyWeaponPickup = 255,
	RPC_Weather = 19,
	RPC_SetTimeEx = 255,
	RPC_ToggleClock = 255,
	RPC_ServerCommand = 0x74,
	RPC_PickedUpPickup = 0x92,
	RPC_PickedUpWeapon = 255,
	RPC_VehicleDestroyed = 0x97,
	RPC_DialogResponse = 21,
	RPC_PlayAudioStream = 45,
	RPC_ClickPlayer = 0x16,
	RPC_PlayerUpdate = 255,
	RPC_ClickTextDraw = 0x52,
	RPC_MapMarker = 0x76,
	RPC_PlayerGiveTakeDamage = 0x54,
	RPC_EnterEditObject = 0x57,
	RPC_EditObject = 0x56,
};

enum ScriptRPCEnumeration
{
	RPC_ScrSetSpawnInfo = 255,
	RPC_ScrSetPlayerTeam = 255,
	RPC_ScrSetPlayerSkin = 255,
	RPC_ScrSetPlayerName = 255,
	RPC_ScrSetPlayerPos = 255,
	RPC_ScrSetPlayerPosFindZ = 255,
	RPC_ScrSetPlayerHealth = 54,
	RPC_ScrPutPlayerInVehicle = 255,
	RPC_ScrRemovePlayerFromVehicle = 255,
	RPC_ScrSetPlayerColor = 255,
	RPC_ScrDisplayGameText = 72,
	RPC_ScrSetInterior = 255,
	RPC_ScrSetCameraPos = 255,
	RPC_ScrSetCameraLookAt = 255,
	RPC_ScrSetVehiclePos = 255,
	RPC_ScrSetVehicleZAngle = 255,
	RPC_ScrVehicleParams = 255,
	RPC_ScrSetCameraBehindPlayer = 255,
	RPC_ScrTogglePlayerControllable = 255,
	RPC_ScrPlaySound = 255,
	RPC_ScrSetWorldBounds = 255,
	RPC_ScrHaveSomeMoney = 255,
	RPC_ScrSetPlayerFacingAngle = 255,
	RPC_ScrResetMoney = 255,
	RPC_ScrResetPlayerWeapons = 255,
	RPC_ScrGivePlayerWeapon = 255,
	RPC_ScrRespawnVehicle = 255,
	RPC_ScrLinkVehicle = 255,
	RPC_ScrSetPlayerArmour = 255,
	RPC_ScrDeathMessage = 255,
	RPC_ScrSetMapIcon = 255,
	RPC_ScrDisableMapIcon = 255,
	RPC_ScrSetWeaponAmmo = 255,
	RPC_ScrSetGravity = 255,
	RPC_ScrSetVehicleHealth = 162,
	RPC_ScrAttachTrailerToVehicle = 255,
	RPC_ScrDetachTrailerFromVehicle = 255,
	RPC_ScrCreateObject = 255,
	RPC_ScrSetObjectPos = 255,
	RPC_ScrSetObjectRotation = 255,
	RPC_ScrDestroyObject = 255,
	RPC_ScrCreateExplosion = 255,
	RPC_ScrShowNameTag = 255,
	RPC_ScrMoveObject = 255,
	RPC_ScrStopObject = 255,
	RPC_ScrNumberPlate = 255,
	RPC_ScrTogglePlayerSpectating = 255,
	RPC_ScrSetPlayerSpectating = 255,
	RPC_ScrPlayerSpectatePlayer = 255,
	RPC_ScrPlayerSpectateVehicle = 255,
	RPC_ScrRemoveComponent = 255,
	RPC_ScrForceSpawnSelection = 255,
	RPC_ScrAttachObjectToPlayer = 255,
	RPC_ScrInitMenu = 255,
	RPC_ScrShowMenu = 255,
	RPC_ScrHideMenu = 255,
	RPC_ScrSetPlayerWantedLevel = 255,
	RPC_ScrShowTextDraw = 149,
	RPC_ScrHideTextDraw = 255,
	RPC_ScrEditTextDraw = 255,
	RPC_ScrAddGangZone = 255,
	RPC_ScrRemoveGangZone = 255,
	RPC_ScrFlashGangZone = 255,
	RPC_ScrStopFlashGangZone = 255,
	RPC_ScrApplyAnimation = 255,
	RPC_ScrClearAnimations = 255,
	RPC_ScrSetSpecialAction = 255,
	RPC_ScrEnableStuntBonus = 255,
	RPC_ScrSetFightingStyle = 255,
	RPC_ScrSetPlayerVelocity = 255,
	RPC_ScrSetVehicleVelocity = 255,
	RPC_ScrToggleWidescreen = 255,
	RPC_ScrSetVehicleTireStatus = 255,
	RPC_ScrSetPlayerDrunkVisuals = 255,
	RPC_ScrSetPlayerDrunkHandling = 255,
	RPC_ScrDialogBox = 20,
};

enum PacketEnumeration
{
	ID_SET_RANDOM_NUMBER_SEED,
	ID_SECURED_CONNECTION_RESPONSE,
	ID_SECURED_CONNECTION_CONFIRMATION,
	ID_CONNECTION_REQUEST = 6,
	ID_AUTH_KEY,
	ID_CONNECTED_PONG = 9,
	ID_INTERNAL_PING = 10,
	ID_PING,
	ID_PING_OPEN_CONNECTIONS,
	ID_REQUEST_STATIC_DATA,
	ID_RPC = 16,
	ID_RPC_REPLY,
	ID_RPC_MAPPING,
	ID_BROADCAST_PINGS,
	ID_DETECT_LOST_CONNECTIONS,
	ID_OPEN_CONNECTION_REQUEST,
	ID_OPEN_CONNECTION_REPLY,
	ID_PAD5,
	ID_CONNECTION_REQUEST_ACCEPTED,
	ID_CONNECTION_ATTEMPT_FAILED,
	ID_NEW_INCOMING_CONNECTION,
	ID_NO_FREE_INCOMING_CONNECTIONS,
	ID_DISCONNECTION_NOTIFICATION,	
	ID_CONNECTION_LOST,
	ID_RSA_PUBLIC_KEY_MISMATCH,
	ID_CONNECTION_BANNED,
	ID_INVALID_PASSWORD,
	ID_MODIFIED_PACKET,
	ID_TIMESTAMP,
	ID_PONG,
	ID_RECEIVED_STATIC_DATA,
	ID_REMOTE_DISCONNECTION_NOTIFICATION,
	ID_REMOTE_CONNECTION_LOST,
	ID_REMOTE_NEW_INCOMING_CONNECTION,
	ID_REMOTE_EXISTING_CONNECTION,
	ID_REMOTE_STATIC_DATA,
	ID_ADVERTISE_SYSTEM = 51,

	ID_UNOCCUPIED_SYNC = 209,
	ID_TRAILER_SYNC,
	ID_PASSENGER_SYNC,
	ID_PLAYER_SYNC,
	ID_MARKERS_SYNC,
	ID_WEAPONS_UPDATE,
	ID_SPECTATOR_SYNC,
	ID_AIM_SYNC,
	ID_VEHICLE_SYNC,
	ID_RCON_COMMAND,
	ID_RCON_RESPONCE,
	ID_STATS_UPDATE,
};

/// These enumerations are used to describe when packets are delivered.
enum PacketPriority
{
	SYSTEM_PRIORITY,   /// \internal Used by RakNet to send above-high priority messages.
	HIGH_PRIORITY,   /// High priority messages are send before medium priority messages.
	MEDIUM_PRIORITY,   /// Medium priority messages are send before low priority messages.
	LOW_PRIORITY,   /// Low priority messages are only sent when no other messages are waiting.
	NUMBER_OF_PRIORITIES
};

/// These enumerations are used to describe how packets are delivered.
/// \note  Note to self: I write this with 3 bits in the stream.  If I add more remember to change that
enum PacketReliability
{
	UNRELIABLE,   /// Same as regular UDP, except that it will also discard duplicate datagrams.  RakNet adds (6 to 17) + 21 bits of overhead, 16 of which is used to detect duplicate packets and 6 to 17 of which is used for message length.
	UNRELIABLE_SEQUENCED,  /// Regular UDP with a sequence counter.  Out of order messages will be discarded.  This adds an additional 13 bits on top what is used for UNRELIABLE.
	RELIABLE,   /// The message is sent reliably, but not necessarily in any order.  Same overhead as UNRELIABLE.
	RELIABLE_ORDERED,   /// This message is reliable and will arrive in the order you sent it.  Messages will be delayed while waiting for out of order messages.  Same overhead as UNRELIABLE_SEQUENCED.
	RELIABLE_SEQUENCED /// This message is reliable and will arrive in the sequence you sent it.  Out or order messages will be dropped.  Same overhead as UNRELIABLE_SEQUENCED.
};

typedef unsigned short PlayerIndex;

struct PlayerID
{
	///The peer address from inet_addr.
	unsigned int binaryAddress;
	///The port number
	unsigned short port;

	PlayerID& operator = ( const PlayerID& input )
	{
		binaryAddress = input.binaryAddress;
		port = input.port;
		return *this;
	}

	bool operator==( const PlayerID& right ) const;
	bool operator!=( const PlayerID& right ) const;
	bool operator > ( const PlayerID& right ) const;
	bool operator < ( const PlayerID& right ) const;
};

/// This represents a user message from another system.
struct Packet
{
	/// Server only - this is the index into the player array that this playerId maps to
	PlayerIndex playerIndex;

	/// The system that send this packet.
	PlayerID playerId;

	/// The length of the data in bytes
	/// \deprecated You should use bitSize.
	unsigned int length;

	/// The length of the data in bits
	unsigned int bitSize;

	/// The data from the sender
	unsigned char* data;

	/// @internal
	/// Indicates whether to delete the data, or to simply delete the packet.
	bool deleteData;
};

/// All RPC functions have the same parameter list - this structure.
struct RPCParameters
{
	/// The data from the remote system
	unsigned char *input;

	/// How many bits long \a input is
	unsigned int numberOfBitsOfData;

	/// Which system called this RPC
	PlayerID sender;

	/// Which instance of RakPeer (or a derived RakServer or RakClient) got this call
	void *recipient;

	/// You can return values from RPC calls by writing them to this BitStream.
	/// This is only sent back if the RPC call originally passed a BitStream to receive the reply.
	/// If you do so and your send is reliable, it will block until you get a reply or you get disconnected from the system you are sending to, whichever is first.
	/// If your send is not reliable, it will block for triple the ping time, or until you are disconnected, or you get a reply, whichever is first.
	BitStream *replyToSender;
};

/// Store Statistics information related to network usage 
struct RakNetStatisticsStruct
{
	///  Number of Messages in the send Buffer (high, medium, low priority)
	unsigned messageSendBuffer[ NUMBER_OF_PRIORITIES ];
	///  Number of messages sent (high, medium, low priority)
	unsigned messagesSent[ NUMBER_OF_PRIORITIES ];
	///  Number of data bits used for user messages
	unsigned messageDataBitsSent[ NUMBER_OF_PRIORITIES ];
	///  Number of total bits used for user messages, including headers
	unsigned messageTotalBitsSent[ NUMBER_OF_PRIORITIES ];
	
	///  Number of packets sent containing only acknowledgements
	unsigned packetsContainingOnlyAcknowlegements;
	///  Number of acknowledgements sent
	unsigned acknowlegementsSent;
	///  Number of acknowledgements waiting to be sent
	unsigned acknowlegementsPending;
	///  Number of acknowledgements bits sent
	unsigned acknowlegementBitsSent;
	
	///  Number of packets containing only acknowledgements and resends
	unsigned packetsContainingOnlyAcknowlegementsAndResends;
	
	///  Number of messages resent
	unsigned messageResends;
	///  Number of bits resent of actual data
	unsigned messageDataBitsResent;
	///  Total number of bits resent, including headers
	unsigned messagesTotalBitsResent;
	///  Number of messages waiting for ack (// TODO - rename this)
	unsigned messagesOnResendQueue;
	
	///  Number of messages not split for sending
	unsigned numberOfUnsplitMessages;
	///  Number of messages split for sending
	unsigned numberOfSplitMessages;
	///  Total number of splits done for sending
	unsigned totalSplits;
	
	///  Total packets sent
	unsigned packetsSent;
	
	///  Number of bits added by encryption
	unsigned encryptionBitsSent;
	///  total bits sent
	unsigned totalBitsSent;
	
	///  Number of sequenced messages arrived out of order
	unsigned sequencedMessagesOutOfOrder;
	///  Number of sequenced messages arrived in order
	unsigned sequencedMessagesInOrder;
	
	///  Number of ordered messages arrived out of order
	unsigned orderedMessagesOutOfOrder;
	///  Number of ordered messages arrived in order
	unsigned orderedMessagesInOrder;
	
	///  Packets with a good CRC received
	unsigned packetsReceived;
	///  Packets with a bad CRC received
	unsigned packetsWithBadCRCReceived;
	///  Bits with a good CRC received
	unsigned bitsReceived;
	///  Bits with a bad CRC received
	unsigned bitsWithBadCRCReceived;
	///  Number of acknowledgement messages received for packets we are resending
	unsigned acknowlegementsReceived;
	///  Number of acknowledgement messages received for packets we are not resending
	unsigned duplicateAcknowlegementsReceived;
	///  Number of data messages (anything other than an ack) received that are valid and not duplicate
	unsigned messagesReceived;
	///  Number of data messages (anything other than an ack) received that are invalid
	unsigned invalidMessagesReceived;
	///  Number of data messages (anything other than an ack) received that are duplicate
	unsigned duplicateMessagesReceived;
	///  Number of messages waiting for reassembly
	unsigned messagesWaitingForReassembly;
	///  Number of messages in reliability output queue
	unsigned internalOutputQueueSize;
	///  Current bits per second
	double bitsPerSecond;
	///  connection start time
	RakNetTime connectionStartTime;
};

class RakClientInterface
{
public:
	virtual ~RakClientInterface() { };
	virtual bool Connect( const char* host, unsigned short serverPort, unsigned short clientPort, unsigned int depreciated, int threadSleepTimer );
	virtual void Disconnect( unsigned int blockDuration, unsigned char orderingChannel=0 );
	virtual void InitializeSecurity( const char *privKeyP, const char *privKeyQ );
	virtual void SetPassword( const char *_password );
	virtual bool HasPassword( void ) const;
	virtual bool Send( const char *data, const int length, PacketPriority priority, PacketReliability reliability, char orderingChannel );
	virtual bool Send( BitStream * bitStream, PacketPriority priority, PacketReliability reliability, char orderingChannel );
	virtual Packet* Receive( void );
	virtual void DeallocatePacket( Packet *packet );
	virtual void PingServer( void );
	virtual void PingServer( const char* host, unsigned short serverPort, unsigned short clientPort, bool onlyReplyOnAcceptingConnections );
	virtual int GetAveragePing( void );
	virtual int GetLastPing( void ) const;
	virtual int GetLowestPing( void ) const;
	virtual int GetPlayerPing( const PlayerID playerId );
	virtual void StartOccasionalPing( void );
	virtual void StopOccasionalPing( void );
	virtual bool IsConnected( void ) const;
	virtual unsigned int GetSynchronizedRandomInteger( void ) const;
	virtual bool GenerateCompressionLayer( unsigned int inputFrequencyTable[ 256 ], bool inputLayer );
	virtual bool DeleteCompressionLayer( bool inputLayer );
	virtual void RegisterAsRemoteProcedureCall( int* uniqueID, void ( *functionPointer ) ( RPCParameters *rpcParms ) );
	virtual void RegisterClassMemberRPC( int* uniqueID, void *functionPointer );
	virtual void UnregisterAsRemoteProcedureCall( int* uniqueID );
	virtual bool RPC( int* uniqueID, const char *data, unsigned int bitLength, PacketPriority priority, PacketReliability reliability, char orderingChannel, bool shiftTimestamp );
	virtual bool RPC( int* uniqueID, BitStream *bitStream, PacketPriority priority, PacketReliability reliability, char orderingChannel, bool shiftTimestamp );
	virtual void Pad( void ); // XXX: Fix it.
	virtual void SetTrackFrequencyTable( bool b );
	virtual bool GetSendFrequencyTable( unsigned int outputFrequencyTable[ 256 ] );
	virtual float GetCompressionRatio( void ) const;
	virtual float GetDecompressionRatio( void ) const;
	virtual void AttachPlugin( void *messageHandler );
	virtual void DetachPlugin( void *messageHandler );
	virtual BitStream * GetStaticServerData( void );
	virtual void SetStaticServerData( const char *data, const int length );
	virtual BitStream * GetStaticClientData( const PlayerID playerId );
	virtual void SetStaticClientData( const PlayerID playerId, const char *data, const int length );
	virtual void SendStaticClientDataToServer( void );
	virtual PlayerID GetServerID( void ) const;
	virtual PlayerID GetPlayerID( void ) const;
	virtual PlayerID GetInternalID( void ) const;
	virtual const char* PlayerIDToDottedIP( const PlayerID playerId ) const;
	virtual void PushBackPacket( Packet *packet, bool pushAtHead );
	virtual void SetRouterInterface( void *routerInterface );
	virtual void RemoveRouterInterface( void *routerInterface );
	virtual void SetTimeoutTime( RakNetTime timeMS );
	virtual bool SetMTUSize( int size );
	virtual int GetMTUSize( void ) const;	
	virtual void AllowConnectionResponseIPMigration( bool allow );
	virtual void AdvertiseSystem( const char *host, unsigned short remotePort, const char *data, int dataLength );
	virtual RakNetStatisticsStruct * const GetStatistics( void );
	virtual void ApplyNetworkSimulator( double maxSendBPS, unsigned short minExtraPing, unsigned short extraPingVariance);
	virtual bool IsNetworkSimulatorActive( void );
	virtual PlayerIndex GetPlayerIndex( void );
};

class RakClient
{
public:
	RakClient( void *pRakClientInterface );
	bool RPC( int rpcId, BitStream *bitStream, PacketPriority priority = HIGH_PRIORITY, PacketReliability reliability = RELIABLE_ORDERED, char orderingChannel = 0, bool shiftTimestamp = false );
	bool Send( BitStream *bitStream, PacketPriority priority = HIGH_PRIORITY, PacketReliability reliability = UNRELIABLE_SEQUENCED, char orderingChannel = 0 );
	void SendDeath( uint16_t killerId, uint8_t reason );
	void RequestClass( int classId );
	void SendSCMEvent( int vehicleID, int eventId, int param1, int param2 );
	void SendSpawn( void );
	void SendPickUp( int pickupId );
	RakClientInterface *GetRakClientInterface( void ) { return pRakClient; };

private:
	RakClientInterface *pRakClient;
};