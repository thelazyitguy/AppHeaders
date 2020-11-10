//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;
@protocol AccurateTimingProviderProtocol, CdnSelectionDelegate, SidxInfoProtocol, _TtP16NFManifestCommon8NFStream_;

@interface ContentHeader3 : NSObject
{
    _Bool _isCbc2Audio;
    unsigned int _cdnId;
    unsigned int _primaryCdnId;
    unsigned int _maxSegmentDuration;
    unsigned int _maxIFrameSegmentDuration;
    unsigned int _downloadedBytes;
    unsigned int _cdnKbps;
    NSString *_url;
    NSArray *_dashIndexData;
    id <SidxInfoProtocol> _sidxInfo;
    NSArray *_dashIFrameIndexData;
    unsigned long long _dashFirstMoofOffset;
    unsigned long long _dashMoovOffset;
    NSString *_dashPsshString;
    NSString *_widevineDashPsshString;
    long long _movieDuration;
    NSMutableArray *_webVttNoteElements;
    NSString *_webVTTHeaderOffset;
    NSString *_trackName;
    NSString *_cbc2IV;
    id <CdnSelectionDelegate> _cdnSelectionDelegate;
    id <_TtP16NFManifestCommon8NFStream_> _manifestStream;
    long long _mediaType;
    NSString *_urlForOfflinePlaylist;
    id <AccurateTimingProviderProtocol> _timingProvider;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <AccurateTimingProviderProtocol> timingProvider; // @synthesize timingProvider=_timingProvider;
@property(copy, nonatomic) NSString *urlForOfflinePlaylist; // @synthesize urlForOfflinePlaylist=_urlForOfflinePlaylist;
@property(readonly, nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property(retain, nonatomic) id <_TtP16NFManifestCommon8NFStream_> manifestStream; // @synthesize manifestStream=_manifestStream;
@property(nonatomic) __weak id <CdnSelectionDelegate> cdnSelectionDelegate; // @synthesize cdnSelectionDelegate=_cdnSelectionDelegate;
@property(nonatomic) unsigned int cdnKbps; // @synthesize cdnKbps=_cdnKbps;
@property(nonatomic) unsigned int downloadedBytes; // @synthesize downloadedBytes=_downloadedBytes;
@property(retain, nonatomic) NSString *cbc2IV; // @synthesize cbc2IV=_cbc2IV;
@property(nonatomic) _Bool isCbc2Audio; // @synthesize isCbc2Audio=_isCbc2Audio;
@property(retain, nonatomic) NSString *trackName; // @synthesize trackName=_trackName;
@property(retain, nonatomic) NSString *webVTTHeaderOffset; // @synthesize webVTTHeaderOffset=_webVTTHeaderOffset;
@property(retain, nonatomic) NSMutableArray *webVttNoteElements; // @synthesize webVttNoteElements=_webVttNoteElements;
@property(nonatomic) long long movieDuration; // @synthesize movieDuration=_movieDuration;
@property(retain, nonatomic) NSString *widevineDashPsshString; // @synthesize widevineDashPsshString=_widevineDashPsshString;
@property(retain, nonatomic) NSString *dashPsshString; // @synthesize dashPsshString=_dashPsshString;
@property(nonatomic) unsigned long long dashMoovOffset; // @synthesize dashMoovOffset=_dashMoovOffset;
@property(nonatomic) unsigned long long dashFirstMoofOffset; // @synthesize dashFirstMoofOffset=_dashFirstMoofOffset;
@property(nonatomic) unsigned int maxIFrameSegmentDuration; // @synthesize maxIFrameSegmentDuration=_maxIFrameSegmentDuration;
@property(nonatomic) unsigned int maxSegmentDuration; // @synthesize maxSegmentDuration=_maxSegmentDuration;
@property(retain, nonatomic) NSArray *dashIFrameIndexData; // @synthesize dashIFrameIndexData=_dashIFrameIndexData;
@property(retain, nonatomic) id <SidxInfoProtocol> sidxInfo; // @synthesize sidxInfo=_sidxInfo;
@property(retain, nonatomic) NSArray *dashIndexData; // @synthesize dashIndexData=_dashIndexData;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) unsigned int primaryCdnId; // @synthesize primaryCdnId=_primaryCdnId;
@property(nonatomic) unsigned int cdnId; // @synthesize cdnId=_cdnId;
- (double)getSegmentDuration:(long long)arg1;
- (id)getStreamUrlForCdnId:(id)arg1;
@property(readonly, nonatomic) NSString *downloadableId;
- (long long)streamProfile;
- (id)encodingProfileName;
- (unsigned long long)videoWidth;
- (unsigned long long)videoHeight;

@end
