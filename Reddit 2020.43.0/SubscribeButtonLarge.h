//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/BaseButton.h>

@class NSString, UIColor, UIImage;
@protocol Subscribable><Styleable, ViewContext;

@interface SubscribeButtonLarge : BaseButton
{
    _Bool _shouldApplyStyling;
    UIColor *_colorBarBackgroundColorOverride;
    id <ViewContext> _viewContext;
    id <Subscribable><Styleable> _model;
    NSString *_subscribeString;
    NSString *_subscribedString;
    UIImage *_unsubscribedImage;
    UIImage *_subscribedImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *subscribedImage; // @synthesize subscribedImage=_subscribedImage;
@property(retain, nonatomic) UIImage *unsubscribedImage; // @synthesize unsubscribedImage=_unsubscribedImage;
@property(copy, nonatomic) NSString *subscribedString; // @synthesize subscribedString=_subscribedString;
@property(copy, nonatomic) NSString *subscribeString; // @synthesize subscribeString=_subscribeString;
@property(nonatomic) _Bool shouldApplyStyling; // @synthesize shouldApplyStyling=_shouldApplyStyling;
@property(retain, nonatomic) id <Subscribable><Styleable> model; // @synthesize model=_model;
@property(readonly, nonatomic) id <ViewContext> viewContext; // @synthesize viewContext=_viewContext;
@property(retain, nonatomic) UIColor *colorBarBackgroundColorOverride; // @synthesize colorBarBackgroundColorOverride=_colorBarBackgroundColorOverride;
- (_Bool)isColorEqualToWhite:(id)arg1;
- (id)followButtonColorWithAdjustedBrightness:(_Bool)arg1;
- (void)configureButtonForSubscribedState:(_Bool)arg1;
- (void)setupImageForSubscribedState:(id)arg1;
- (void)setupImageForUnsubscribedState:(id)arg1;
- (void)configureWithSubscriptionStatus:(_Bool)arg1 subscribeString:(id)arg2 subscribedString:(id)arg3 shouldApplyStyling:(_Bool)arg4;
- (void)configureWithModel:(id)arg1 shouldApplyStyling:(_Bool)arg2;
- (id)initWithViewContext:(id)arg1;

@end
