//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UJET/UjetBaseTextInputPopupViewController.h>

@class UIButton, UjetCommunication;

@interface UjetTextRequestPopupViewController : UjetBaseTextInputPopupViewController
{
    UIButton *submitButton;
    UIButton *cancelButton;
    UjetCommunication *_model;
}

@property(retain, nonatomic) UjetCommunication *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)cancel:(id)arg1;
- (void)submit:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

@end
