//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIButton;
@protocol WaitListPromptDelegate;

@interface CO_VC_WaitlistPrompt : UIViewController
{
    id <WaitListPromptDelegate> delegate;
    UIButton *btnNo;
    UIButton *btnYes;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *btnYes; // @synthesize btnYes;
@property(retain, nonatomic) UIButton *btnNo; // @synthesize btnNo;
@property(retain, nonatomic) id <WaitListPromptDelegate> delegate; // @synthesize delegate;
- (void)doNo:(id)arg1;
- (void)doYes:(id)arg1;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

