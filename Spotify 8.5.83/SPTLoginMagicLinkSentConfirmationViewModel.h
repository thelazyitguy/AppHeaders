//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SPTLoginMagicLinkSentConfirmationViewLogger, SPTLoginOpenEmailAppController;

@interface SPTLoginMagicLinkSentConfirmationViewModel : NSObject
{
    NSString *_emailOrUsername;
    SPTLoginOpenEmailAppController *_emailAppController;
    SPTLoginMagicLinkSentConfirmationViewLogger *_logger;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SPTLoginMagicLinkSentConfirmationViewLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) SPTLoginOpenEmailAppController *emailAppController; // @synthesize emailAppController=_emailAppController;
@property(copy, nonatomic) NSString *emailOrUsername; // @synthesize emailOrUsername=_emailOrUsername;
- (void)userDidSeeView;
- (void)userDidTapOpenEmailButton;
- (_Bool)shouldShowOpenEmailButton;
- (id)emailSentImage;
- (id)emailButtonText;
- (id)bodyLabelText;
- (id)upperLabelText;
- (id)titleLabelText;
- (id)initWithEmailOrUsername:(id)arg1 logger:(id)arg2 emailAppController:(id)arg3;

@end

