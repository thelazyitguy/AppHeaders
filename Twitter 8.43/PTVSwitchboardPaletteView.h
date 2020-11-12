//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PeriscopeSDK/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, UIButton;
@protocol PTVSwitchboardPaletteViewDelegate;

@interface PTVSwitchboardPaletteView : UIView <UIGestureRecognizerDelegate>
{
    id <PTVSwitchboardPaletteViewDelegate> _delegate;
    long long _switchboardContentMode;
    UIButton *_switchboardContentModeButton;
    UIButton *_removeButton;
    UIView *_dividerView;
    UIButton *_sketchButton;
    UIButton *_switchPhotoButton;
}

+ (id)switchboardPaletteViewWithDelegate:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak UIButton *switchPhotoButton; // @synthesize switchPhotoButton=_switchPhotoButton;
@property(nonatomic) __weak UIButton *sketchButton; // @synthesize sketchButton=_sketchButton;
@property(nonatomic) __weak UIView *dividerView; // @synthesize dividerView=_dividerView;
@property(nonatomic) __weak UIButton *removeButton; // @synthesize removeButton=_removeButton;
@property(nonatomic) __weak UIButton *switchboardContentModeButton; // @synthesize switchboardContentModeButton=_switchboardContentModeButton;
@property(nonatomic) long long switchboardContentMode; // @synthesize switchboardContentMode=_switchboardContentMode;
@property(nonatomic) __weak id <PTVSwitchboardPaletteViewDelegate> delegate; // @synthesize delegate=_delegate;
- (double)paletteHeight;
- (void)didTapSwitchPhoto:(id)arg1;
- (void)updateContentModeButton;
- (void)didTapSwitchContentMode:(id)arg1;
- (void)didTapSketch:(id)arg1;
- (void)updateRemoveButton;
- (void)didTapRemove:(id)arg1;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
