//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Module_Framework/YTAttributedRendererViewControllerProtocol-Protocol.h>

@class GIMMe, NSString, YTIButtonRenderer, YTQTMButton;
@protocol YTResponder;

@interface YTButtonAttributedViewController : UIViewController <YTAttributedRendererViewControllerProtocol>
{
    YTIButtonRenderer *_buttonRenderer;
    YTQTMButton *_button;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
}

- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (id)thumbnailMappings;
- (void)didPressButton;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithRenderer:(id)arg1 parentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

