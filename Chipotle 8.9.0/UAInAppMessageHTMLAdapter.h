//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Airship/UAInAppMessageAdapterProtocol-Protocol.h>

@class NSString, UAInAppMessage, UAInAppMessageHTMLDisplayContent, UAInAppMessageHTMLStyle, UAInAppMessageHTMLViewController, UAInAppMessageResizableViewController, UIWindowScene;

@interface UAInAppMessageHTMLAdapter : NSObject <UAInAppMessageAdapterProtocol>
{
    UAInAppMessageHTMLStyle *_style;
    UAInAppMessage *_message;
    UAInAppMessageHTMLDisplayContent *_displayContent;
    UAInAppMessageHTMLViewController *_htmlViewController;
    UAInAppMessageResizableViewController *_resizableContainerViewController;
    UIWindowScene *_scene;
}

+ (id)adapterForMessage:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIWindowScene *scene; // @synthesize scene=_scene;
@property(retain, nonatomic) UAInAppMessageResizableViewController *resizableContainerViewController; // @synthesize resizableContainerViewController=_resizableContainerViewController;
@property(retain, nonatomic) UAInAppMessageHTMLViewController *htmlViewController; // @synthesize htmlViewController=_htmlViewController;
@property(retain, nonatomic) UAInAppMessageHTMLDisplayContent *displayContent; // @synthesize displayContent=_displayContent;
@property(retain, nonatomic) UAInAppMessage *message; // @synthesize message=_message;
@property(retain, nonatomic) UAInAppMessageHTMLStyle *style; // @synthesize style=_style;
- (void)display:(CDUnknownBlockType)arg1;
- (void)createContainerViewController;
- (_Bool)isReadyToDisplay;
- (void)prepareWithAssets:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)isNetworkConnected;
- (id)initWithMessage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
