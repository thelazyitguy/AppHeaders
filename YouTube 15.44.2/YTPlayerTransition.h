//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, NSString, UIView, YTICommand, YTPlayerLatencyLoggerWrapper, YTPlayerPrefetchTask, YTPlayerRequestDecorator, YTPlayerResponse;

@interface YTPlayerTransition : NSObject
{
    YTPlayerLatencyLoggerWrapper *_latencyLoggerWrapper;
    int _expiredForSeconds;
    _Bool _autoplay;
    _Bool _autonav;
    _Bool _flungFromMDX;
    _Bool _hasInfoCardSource;
    YTPlayerPrefetchTask *_prefetchTask;
    GIMMe *_gimme;
    YTICommand *_navigationEndpoint;
    YTPlayerResponse *_playerResponseOverride;
    UIView *_splashScreenView;
    YTPlayerRequestDecorator *_playerRequestDecorator;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) YTPlayerRequestDecorator *playerRequestDecorator; // @synthesize playerRequestDecorator=_playerRequestDecorator;
@property(retain, nonatomic) UIView *splashScreenView; // @synthesize splashScreenView=_splashScreenView;
@property(readonly, nonatomic) YTPlayerResponse *playerResponseOverride; // @synthesize playerResponseOverride=_playerResponseOverride;
@property(readonly, nonatomic) _Bool hasInfoCardSource; // @synthesize hasInfoCardSource=_hasInfoCardSource;
@property(readonly, nonatomic) _Bool flungFromMDX; // @synthesize flungFromMDX=_flungFromMDX;
@property(readonly, nonatomic) _Bool autonav; // @synthesize autonav=_autonav;
@property(readonly, nonatomic) _Bool autoplay; // @synthesize autoplay=_autoplay;
@property(readonly, nonatomic) YTICommand *navigationEndpoint; // @synthesize navigationEndpoint=_navigationEndpoint;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (_Bool)canUsePlaybackDataLoadedForPlayerTransition:(id)arg1;
- (id)copyWithExpiredForSeconds:(int)arg1;
@property(readonly, nonatomic) YTPlayerLatencyLoggerWrapper *latencyLoggerWrapper;
@property(retain, nonatomic) YTPlayerPrefetchTask *prefetchTask; // @synthesize prefetchTask=_prefetchTask;
@property(readonly, nonatomic) int expiredForSeconds;
@property(readonly, nonatomic) NSString *playlistID;
@property(readonly, nonatomic) NSString *videoID;
- (id)initWithNavigationEndpoint:(id)arg1 latencyLogger:(id)arg2 autoplay:(_Bool)arg3 autonav:(_Bool)arg4 flungFromMDX:(_Bool)arg5 hasInfoCardSource:(_Bool)arg6 playerResponseOverride:(id)arg7 splashScreenView:(id)arg8 playerRequestDecorator:(id)arg9;
- (id)initWithNavigationEndpoint:(id)arg1 latencyLogger:(id)arg2 autoplay:(_Bool)arg3 autonav:(_Bool)arg4 flungFromMDX:(_Bool)arg5;
- (id)initWithNavigationEndpoint:(id)arg1 latencyLogger:(id)arg2 autoplay:(_Bool)arg3 autonav:(_Bool)arg4;
- (id)initWithNavigationEndpoint:(id)arg1 latencyLogger:(id)arg2 autoplay:(_Bool)arg3 playerRequestDecorator:(id)arg4;
- (id)initWithNavigationEndpoint:(id)arg1 latencyLogger:(id)arg2;

@end

