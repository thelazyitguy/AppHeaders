//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <LinkKit/PLKCustomizable-Protocol.h>

@class NSString, UIImageView, UILabel;

@interface PLKPrivacyInterstitialPaneViewController : UIViewController <PLKCustomizable>
{
    UILabel *_headingLabel;
    UILabel *_secureLabel;
    UILabel *_secureInfoLabel;
    UILabel *_privateLabel;
    UILabel *_privateInfoLabel;
    UIImageView *_secureInfoImageView;
    UIImageView *_privateInfoImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *privateInfoImageView; // @synthesize privateInfoImageView=_privateInfoImageView;
@property(retain, nonatomic) UIImageView *secureInfoImageView; // @synthesize secureInfoImageView=_secureInfoImageView;
@property(retain, nonatomic) UILabel *privateInfoLabel; // @synthesize privateInfoLabel=_privateInfoLabel;
@property(retain, nonatomic) UILabel *privateLabel; // @synthesize privateLabel=_privateLabel;
@property(retain, nonatomic) UILabel *secureInfoLabel; // @synthesize secureInfoLabel=_secureInfoLabel;
@property(retain, nonatomic) UILabel *secureLabel; // @synthesize secureLabel=_secureLabel;
@property(retain, nonatomic) UILabel *headingLabel; // @synthesize headingLabel=_headingLabel;
- (id)privateInfoTextWithConfiguration:(id)arg1;
- (id)headingTextWithConfiguration:(id)arg1;
- (void)customizeWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
