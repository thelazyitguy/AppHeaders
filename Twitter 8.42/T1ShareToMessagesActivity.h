//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1Activity.h>

#import <T1Twitter/MFMessageComposeViewControllerDelegate-Protocol.h>

@class MFMessageComposeViewController, NSString, UIViewController;

@interface T1ShareToMessagesActivity : T1Activity <MFMessageComposeViewControllerDelegate>
{
    UIViewController *_presenterViewController;
    MFMessageComposeViewController *_messageComposeViewController;
}

- (void).cxx_destruct;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)performActivity;
- (_Bool)isSupported;
- (id)initWithActivityModel:(id)arg1 presenterViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

