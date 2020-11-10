//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DisplayPageRequest, ModalShimViewController, NFUIMobileCollectionsToolTipView, NSDictionary, NSNumber, NSString, PlaybackSourceModel;
@protocol NFUIDisplayPageNavigationProtocol;

@protocol NFUIDisplayPageProtocol <NSObject>
+ (id)newDisplayPageCollectionViewController;
+ (_Bool)shouldDisplay:(DisplayPageRequest *)arg1;
- (NSString *)defaultNavigationLevel;
@property(nonatomic, copy) NSDictionary *transitionOptions;
@property(nonatomic) _Bool shouldAutoScroll;
@property(nonatomic, copy) PlaybackSourceModel *playbackSourceModel;
@property(nonatomic, copy) NSNumber *videoId;
@property(nonatomic, retain) DisplayPageRequest *dpRequest;
@property(nonatomic) __weak id <NFUIDisplayPageNavigationProtocol> dpNav;

@optional
- (void)playTrailerWithId:(NSNumber *)arg1;
@property(nonatomic, retain) NFUIMobileCollectionsToolTipView *tooltipView;
@property(nonatomic, retain) ModalShimViewController *modalShim;
- (void)thumbRatingAnimationDidComplete;
- (void)thumbRatingDidChange:(long long)arg1;
- (void)download:(id)arg1 withId:(NSString *)arg2 title:(NSString *)arg3;
- (void)playWithId:(NSNumber *)arg1;
- (void)play:(id)arg1;
- (void)setVideoId:(NSNumber *)arg1 withData:(NSDictionary *)arg2;
@end

