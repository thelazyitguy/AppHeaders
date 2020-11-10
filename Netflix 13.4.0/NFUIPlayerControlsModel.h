//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@class NSString;
@protocol NFUITrickPlayModel;

@interface NFUIPlayerControlsModel : NSObject <NSCopying, NSMutableCopying>
{
    NSString *_videoTitle;
    NSString *_videoTitleOnly;
    NSString *_showDetils;
    double _videoBookmarkPosition;
    double _videoRuntime;
    double _autoHideTimeout;
    id <NFUITrickPlayModel> _trickPlayModel;
    CDStruct_2bbefbf2 _features;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <NFUITrickPlayModel> trickPlayModel; // @synthesize trickPlayModel=_trickPlayModel;
@property(readonly, nonatomic) double autoHideTimeout; // @synthesize autoHideTimeout=_autoHideTimeout;
@property(readonly, nonatomic) double videoRuntime; // @synthesize videoRuntime=_videoRuntime;
@property(readonly, nonatomic) double videoBookmarkPosition; // @synthesize videoBookmarkPosition=_videoBookmarkPosition;
@property(retain, nonatomic) NSString *showDetils; // @synthesize showDetils=_showDetils;
@property(retain, nonatomic) NSString *videoTitleOnly; // @synthesize videoTitleOnly=_videoTitleOnly;
@property(readonly, nonatomic) NSString *videoTitle; // @synthesize videoTitle=_videoTitle;
@property(readonly, nonatomic) CDStruct_2bbefbf2 features; // @synthesize features=_features;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

