//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class NSLayoutConstraint, NSObject, UIButton, UIControl;
@protocol IFFooterViewEventHandlerProtocol;

@interface IFMenuFooterView : UITableViewHeaderFooterView
{
    NSLayoutConstraint *_roundAddMemeVerticalOffset;
    NSLayoutConstraint *_closeButtonVerticalOffset;
    UIButton *_roundAddMemButton;
    UIButton *_closeMenuButton;
    UIButton *_addMemeText;
    UIControl *_addMemeControl;
    NSLayoutConstraint *_bottomCloseConstraint;
    NSLayoutConstraint *_roundAddMemeWidth;
    NSLayoutConstraint *_roundAddMemeHeight;
    NSLayoutConstraint *_addMemeTextHeight;
    NSObject<IFFooterViewEventHandlerProtocol> *_eventHandler;
}

- (void).cxx_destruct;
@property(nonatomic) __weak NSObject<IFFooterViewEventHandlerProtocol> *eventHandler; // @synthesize eventHandler=_eventHandler;
@property(nonatomic) __weak NSLayoutConstraint *addMemeTextHeight; // @synthesize addMemeTextHeight=_addMemeTextHeight;
@property(nonatomic) __weak NSLayoutConstraint *roundAddMemeHeight; // @synthesize roundAddMemeHeight=_roundAddMemeHeight;
@property(nonatomic) __weak NSLayoutConstraint *roundAddMemeWidth; // @synthesize roundAddMemeWidth=_roundAddMemeWidth;
@property(nonatomic) __weak NSLayoutConstraint *bottomCloseConstraint; // @synthesize bottomCloseConstraint=_bottomCloseConstraint;
@property(nonatomic) __weak UIControl *addMemeControl; // @synthesize addMemeControl=_addMemeControl;
@property(nonatomic) __weak UIButton *addMemeText; // @synthesize addMemeText=_addMemeText;
@property(nonatomic) __weak UIButton *closeMenuButton; // @synthesize closeMenuButton=_closeMenuButton;
@property(nonatomic) __weak UIButton *roundAddMemButton; // @synthesize roundAddMemButton=_roundAddMemButton;
@property(nonatomic) __weak NSLayoutConstraint *closeButtonVerticalOffset; // @synthesize closeButtonVerticalOffset=_closeButtonVerticalOffset;
@property(nonatomic) __weak NSLayoutConstraint *roundAddMemeVerticalOffset; // @synthesize roundAddMemeVerticalOffset=_roundAddMemeVerticalOffset;
- (void)updateLayout;
- (void)upSwiped:(id)arg1;
- (void)footerTapped:(id)arg1;
- (void)addMemeViewTap:(id)arg1;
- (void)addMemeViewTouchDown:(id)arg1;
- (void)addMemeViewTouchCancel:(id)arg1;
- (void)addMemeTextTapped:(id)arg1;
- (void)addMemePicTapped:(id)arg1;
- (void)closeMenu:(id)arg1;
- (void)onAddMemButtonLongTap;
- (void)awakeFromNib;

@end
