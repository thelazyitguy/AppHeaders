//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SXSearchParameterOverridesDelegate-Protocol.h"

@class ANXLayout, NSString, UIScrollView, UIView;
@protocol ANPBarContainer, ANXAppearanceContext, ANXSubNavService;

@protocol ANPTopNav <SXSearchParameterOverridesDelegate>
@property(nonatomic) __weak UIView *statusBarOverlay;
@property(readonly, nonatomic) ANXLayout *layout;
@property(retain, nonatomic) id <ANXAppearanceContext> context;
@property(readonly, nonatomic) double subNavHeight;
@property(readonly, nonatomic) double currentHeight;
@property(readonly, nonatomic) double baseHeight;
@property(nonatomic) double originY;
- (id <ANXSubNavService>)subNavService;
- (id <ANPBarContainer>)appBarContainer;
- (_Bool)isBarVisible:(NSString *)arg1;
- (void)deviceOrientationWillChangeToSize:(struct CGSize)arg1;
- (void)contentScrollViewDidScroll:(UIScrollView *)arg1;
- (void)historyModified;
- (void)updateCartBadge:(long long)arg1 animated:(_Bool)arg2;
- (void)appDidFinishStartup;
- (void)cancelAmazonBooksSearch;
- (void)startAmazonBooksSearch;
- (void)cancelSearch;
- (void)startSearch;
- (double)coreHeightForLayout:(ANXLayout *)arg1;
- (double)heightForLayout:(ANXLayout *)arg1;

@optional
@property(readonly, nonatomic) NSString *cartStoreIdentifier;
@end
