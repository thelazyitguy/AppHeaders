//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NavigationFramework/GMSx_QTMButton.h>

#import <NavigationFramework/AZButtonElevationConfigurable-Protocol.h>
#import <NavigationFramework/GMCSClientVisualElement-Protocol.h>

@class GMSx_MDCActivityIndicator, NSString, UIColor;

@interface GMSx_AZButton : GMSx_QTMButton <GMCSClientVisualElement, AZButtonElevationConfigurable>
{
    GMSx_MDCActivityIndicator *_activityIndicator;
    struct UIEdgeInsets _extraTitleEdgeInsets;
    struct UIEdgeInsets _extraImageEdgeInsets;
    UIColor *_cachedDisabledTitleColor;
    int _veType;
    id _userData;
    unsigned long long _splashType;
}

+ (id)floatingButtonWithMiniSize:(_Bool)arg1;
+ (id)raisedButton;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long splashType; // @synthesize splashType=_splashType;
@property(retain, nonatomic) id userData; // @synthesize userData=_userData;
@property(nonatomic) int veType; // @synthesize veType=_veType;
@property(readonly, copy) NSString *description;
- (void)setLoading:(_Bool)arg1 spinnerColor:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 shape:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
