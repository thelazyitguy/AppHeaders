//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTLoginErrorLogger;
@protocol SPTLoginLogger;

@interface SPTSignupFacebookConfirmationLogger : NSObject
{
    id <SPTLoginLogger> _logger;
    SPTLoginErrorLogger *_errorLogger;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SPTLoginErrorLogger *errorLogger; // @synthesize errorLogger=_errorLogger;
@property(retain, nonatomic) id <SPTLoginLogger> logger; // @synthesize logger=_logger;
- (void)logErrorWithCode:(unsigned long long)arg1;
- (void)logUserDidTapLoginWithEmailButton;
- (void)logUserDidTapCreateAccountButton;
- (void)logUserDidSeeView;
- (id)initWithLogger:(id)arg1;

@end

