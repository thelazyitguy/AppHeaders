//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class UIView;
@protocol GHKSmartJourneysCard, GHKSmartJourneysCardDelegate, GHKSmartJourneysCardParams;

@protocol GHKSmartJourneysCard <NSObject>
+ (id <GHKSmartJourneysCard>)createCardWithParams:(id <GHKSmartJourneysCardParams>)arg1;
@property(nonatomic) __weak id <GHKSmartJourneysCardDelegate> delegate;
- (UIView *)uiView;
- (void)setWidth:(double)arg1;
@end
