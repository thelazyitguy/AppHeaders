//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSString;
@protocol ANXMetricsService, CXIStoreAction;

@interface CXIStoreModesBottomNavUIButton : UIButton
{
    NSString *_barStoreButtonType;
    NSString *_barItemUri;
    NSString *_barItemIdentifier;
    NSString *_storeIdentifier;
    NSString *_storeCartBarItemEmptyImage;
    NSString *_storeCartBarItemFullImage;
    id <ANXMetricsService> _anxMetricsService;
    id <CXIStoreAction> _action;
}

@property(retain, nonatomic) id <CXIStoreAction> action; // @synthesize action=_action;
@property(retain, nonatomic) id <ANXMetricsService> anxMetricsService; // @synthesize anxMetricsService=_anxMetricsService;
@property(retain, nonatomic) NSString *storeCartBarItemFullImage; // @synthesize storeCartBarItemFullImage=_storeCartBarItemFullImage;
@property(retain, nonatomic) NSString *storeCartBarItemEmptyImage; // @synthesize storeCartBarItemEmptyImage=_storeCartBarItemEmptyImage;
@property(readonly, nonatomic) NSString *storeIdentifier; // @synthesize storeIdentifier=_storeIdentifier;
@property(readonly, nonatomic) NSString *barItemIdentifier; // @synthesize barItemIdentifier=_barItemIdentifier;
@property(readonly, nonatomic) NSString *barItemUri; // @synthesize barItemUri=_barItemUri;
@property(readonly, nonatomic) NSString *barStoreButtonType; // @synthesize barStoreButtonType=_barStoreButtonType;
- (void).cxx_destruct;
- (void)toolBarButtonPressed:(id)arg1;
- (id)centerLabelVerticallyButton:(id)arg1;
- (id)initWithItem:(id)arg1 action:(id)arg2;

@end
