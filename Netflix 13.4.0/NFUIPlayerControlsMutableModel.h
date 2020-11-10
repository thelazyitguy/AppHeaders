//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NFUIPlayerControlsModel.h"

@class NSString;
@protocol NFUITrickPlayModel;

@interface NFUIPlayerControlsMutableModel : NFUIPlayerControlsModel
{
    NSString *_videoTitle;
    NSString *_videoTitleOnly;
    NSString *_showDetils;
    double _videoBookmarkPosition;
    double _videoRuntime;
    id <NFUITrickPlayModel> _trickPlayModel;
    CDStruct_2bbefbf2 _features;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <NFUITrickPlayModel> trickPlayModel; // @synthesize trickPlayModel=_trickPlayModel;
@property(nonatomic) double videoRuntime; // @synthesize videoRuntime=_videoRuntime;
@property(nonatomic) double videoBookmarkPosition; // @synthesize videoBookmarkPosition=_videoBookmarkPosition;
@property(retain, nonatomic) NSString *showDetils; // @synthesize showDetils=_showDetils;
@property(retain, nonatomic) NSString *videoTitleOnly; // @synthesize videoTitleOnly=_videoTitleOnly;
@property(retain, nonatomic) NSString *videoTitle; // @synthesize videoTitle=_videoTitle;
@property(nonatomic) CDStruct_2bbefbf2 features; // @synthesize features=_features;

@end
