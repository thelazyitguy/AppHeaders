//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GAZUserNotificationCategory : NSObject
{
    _Bool _approveForegroundMode;
    NSString *_categoryIdentifier;
    NSString *_approveActionIdentifier;
    NSString *_approveString;
    NSString *_denyActionIdentifier;
    NSString *_denyString;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool approveForegroundMode; // @synthesize approveForegroundMode=_approveForegroundMode;
@property(retain, nonatomic) NSString *denyString; // @synthesize denyString=_denyString;
@property(retain, nonatomic) NSString *denyActionIdentifier; // @synthesize denyActionIdentifier=_denyActionIdentifier;
@property(retain, nonatomic) NSString *approveString; // @synthesize approveString=_approveString;
@property(retain, nonatomic) NSString *approveActionIdentifier; // @synthesize approveActionIdentifier=_approveActionIdentifier;
@property(retain, nonatomic) NSString *categoryIdentifier; // @synthesize categoryIdentifier=_categoryIdentifier;

@end

