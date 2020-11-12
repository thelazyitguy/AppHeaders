//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MDXLocationInfo, NSArray, NSData, NSString;
@protocol MDXClientAppInfo;

@interface MDXPlaybackDescriptorConfig : NSObject
{
    _Bool _isLive;
    float _startTimeSeconds;
    NSArray *_videoIDs;
    long long _index;
    long long _playlistExpansionType;
    NSString *_playlistID;
    NSString *_watchParams;
    NSString *_playerParams;
    MDXLocationInfo *_locationInfo;
    NSData *_clickTrackingParams;
    id <MDXClientAppInfo> _clientAppInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <MDXClientAppInfo> clientAppInfo; // @synthesize clientAppInfo=_clientAppInfo;
@property(retain, nonatomic) NSData *clickTrackingParams; // @synthesize clickTrackingParams=_clickTrackingParams;
@property(retain, nonatomic) MDXLocationInfo *locationInfo; // @synthesize locationInfo=_locationInfo;
@property(copy, nonatomic) NSString *playerParams; // @synthesize playerParams=_playerParams;
@property(copy, nonatomic) NSString *watchParams; // @synthesize watchParams=_watchParams;
@property(copy, nonatomic) NSString *playlistID; // @synthesize playlistID=_playlistID;
@property(nonatomic) long long playlistExpansionType; // @synthesize playlistExpansionType=_playlistExpansionType;
@property(nonatomic) _Bool isLive; // @synthesize isLive=_isLive;
@property(nonatomic) float startTimeSeconds; // @synthesize startTimeSeconds=_startTimeSeconds;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(readonly, nonatomic) NSArray *videoIDs; // @synthesize videoIDs=_videoIDs;
- (id)initWithWatchEndpoint:(id)arg1;
- (id)initWithVideoIDs:(id)arg1;

@end
