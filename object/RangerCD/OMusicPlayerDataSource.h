
/***************************************************************
 * Name:      OMusicPlayerDataSource.h
 * Purpose:   Defines Music Player Data Source Object
 * Author:    RangerCD (admin@debug.moe)
 * Created:   2015-10-01
 * Copyright: <2015><RangerCD>
 * License:
 **************************************************************/

#ifndef RANGERCD_OMUSICPLAYERDATASOURCE_H
#define RANGERCD_OMUSICPLAYERDATASOURCE_H

#include <NERvGear/component/CDataSource.h>
#include <NERvGear/interface/IDataSource.h>

/// \declns{::RangerCD}
namespace RangerCD {

/// \ingroup mod_obj_hub
///
/// \object RangerCD::OMusicPlayerDataSource
/// \extends NERvGear::OUnknown
/// \implements NERvGear::CDataSource
/// \implements NERvGear::IDataSource
///
/// \brief Data source implementation for music players.
///
/// Available data, value and IDs:
/// - Universal Players
///   - Data UID: RangerCD::MusicPlayer::ID_UNI
///   - Data Values: RangerCD::MusicPlayer::Universal::VALUE
/// - CAD Compatible Players
///   - Data UID: RangerCD::MusicPlayer::ID_CAD
///   - Data Values: RangerCD::MusicPlayer::CAD::VALUE
/// - NetEase Cloud Music
///   - Data UID: RangerCD::MusicPlayer::ID_NETEASE
///   - Data Values: RangerCD::MusicPlayer::NetEase::VALUE
/// - Xiami Music
///   - Data UID: RangerCD::MusicPlayer::ID_XIAMI
///   - Data Values: RangerCD::MusicPlayer::Xiami::VALUE
/// - QQ Music
///   - Data UID: RangerCD::MusicPlayer::ID_QQMUSIC
///   - Data Values: RangerCD::MusicPlayer::QQMusic::VALUE
/// - Kugou Music
///   - Data UID: RangerCD::MusicPlayer::ID_KUGOU
///   - Data Values: RangerCD::MusicPlayer::Kugou::VALUE
///
/// All of the value types are fixed and indicated by the prefix of their IDs.
///
/// \version 1.2.1
///     - Initial release.
///
/// \depend{\link PMusicPlayerSupport Music Player Support\endlink 0.1.0 and above}
/// \module{Plugins\\Music Player Support\\MODULE.DLL}
/// \declid{Object,RangerCD::ID_OMusicPlayerDataSource,A60D2B8A-DCD9-4753-9E3F-C9F2B686F34B}

/// \declns{RangerCD::MusicPlayer}
namespace MusicPlayer {

/// \declns{RangerCD::MusicPlayer::Universal}
namespace Universal {

/// \brief Universal player value IDs.
enum VALUE {
	STR_CUSTOM,
};


} // Universal

/// \declns{RangerCD::MusicPlayer::CAD}
namespace CAD {

/// \brief CAD compatible player value IDs.
enum VALUE {
	LNG_POS,
	STR_POS,
	INT_VOL,
	STR_TITLE,
	STR_ARTIST,
	STR_ALBUM,
	STR_CUSTOM,
};


} // CAD

/// \declns{RangerCD::MusicPlayer::NetEase}
namespace NetEase {

/// \brief NetEase Cloud Music value IDs.
enum VALUE {
	STR_INFO,
	STR_CUSTOM,
};


} // NetEase

/// \declns{RangerCD::MusicPlayer::Xiami}
namespace Xiami {

/// \brief Xiami Music value IDs.
enum VALUE {
	STR_INFO,
	STR_CUSTOM,
};


} // Xiami

/// \declns{RangerCD::MusicPlayer::QQMusic}
namespace QQMusic {

/// \brief QQ Music value IDs.
enum VALUE {
	STR_INFO,
	STR_CUSTOM,
};


} // QQMusic

/// \declns{RangerCD::MusicPlayer::Kugou}
namespace Kugou {

/// \brief Kugou Music value IDs.
enum VALUE {
	STR_INFO,
	STR_CUSTOM,
};


} // Kugou


NVG_DEFINE_UID(ID_UNI,     0x64f23bc6, 0xcdf7, 0x4cbb, 0xb1, 0xcd, 0xee, 0xdd, 0xf3, 0x92, 0xfd, 0x21); ///< 64F23BC6-CDF7-4cbb-B1CD-EEDDF392FD21
NVG_DEFINE_UID(ID_CAD,     0x26ddf5cf, 0x528b, 0x46b4, 0xb1, 0x84, 0x19, 0xed, 0x77, 0x1d, 0x49, 0x5d); ///< 26DDF5CF-528B-46b4-B184-19ED771D495D
NVG_DEFINE_UID(ID_NETEASE, 0x80b56631, 0x8172, 0x45e8, 0xab, 0x34, 0x64, 0xb3, 0xd2, 0x70, 0xda, 0xd6); ///< 80B56631-8172-45e8-AB34-64B3D270DAD6
NVG_DEFINE_UID(ID_XIAMI,   0x0a14d6b5, 0x76f8, 0x428b, 0xa9, 0xce, 0x50, 0x53, 0x1d, 0x96, 0x97, 0xd4); ///< 0A14D6B5-76F8-428b-A9CE-50531D9697D4
NVG_DEFINE_UID(ID_QQMUSIC, 0x0450128c, 0x1180, 0x4f65, 0x91, 0x82, 0xd9, 0x1c, 0x7a, 0x33, 0x7c, 0x51); ///< 0450128C-1180-4f65-9182-D91C7A337C51
NVG_DEFINE_UID(ID_KUGOU,   0x0942461a, 0xe21c, 0x4ac1, 0xa4, 0x1d, 0x25, 0x66, 0x8f, 0x29, 0x44, 0xdd); ///< 0942461A-E21C-4ac1-A41D-25668F2944DD

} // MusicPlayer


// Object ID
NVG_DEFINE_UID(ID_OMusicPlayerDataSource, 0xa60d2b8a, 0xdcd9, 0x4753, 0x9e, 0x3f, 0xc9, 0xf2, 0xb6, 0x86, 0xf3, 0x4b); ///< A60D2B8A-DCD9-4753-9E3F-C9F2B686F34B


} // RangerCD

#endif // RANGERCD_OMUSICPLAYERDATASOURCE_H
