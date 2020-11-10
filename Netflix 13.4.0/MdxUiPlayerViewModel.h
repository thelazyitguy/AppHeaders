//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;
@protocol NFUITrickPlayModel;

@interface MdxUiPlayerViewModel : NSObject
{
    NSString *_nowPlayingImageUrl;
    NSString *_airPlayImageUrl;
    NSDictionary *_summary;
    NSDictionary *_trickplayInfo;
    NSString *_mdxNowPlaying;
    NSString *_mdxPostPlay;
    NSString *_videoTitle;
}

+ (id)keyPathsFromVideoIdString:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *videoTitle; // @synthesize videoTitle=_videoTitle;
@property(copy, nonatomic) NSString *mdxPostPlay; // @synthesize mdxPostPlay=_mdxPostPlay;
@property(copy, nonatomic) NSString *mdxNowPlaying; // @synthesize mdxNowPlaying=_mdxNowPlaying;
@property(copy, nonatomic) NSDictionary *trickplayInfo; // @synthesize trickplayInfo=_trickplayInfo;
@property(copy, nonatomic) NSDictionary *summary; // @synthesize summary=_summary;
@property(copy, nonatomic) NSString *airPlayImageUrl; // @synthesize airPlayImageUrl=_airPlayImageUrl;
@property(copy, nonatomic) NSString *nowPlayingImageUrl; // @synthesize nowPlayingImageUrl=_nowPlayingImageUrl;
@property(readonly, nonatomic) id <NFUITrickPlayModel> trickPlayModel;
- (id)initWithVideoIdString:(id)arg1;

@end
