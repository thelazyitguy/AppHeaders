//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/NSCoding-Protocol.h>

@class CSHMHelpMobileRequest, NSString;

@interface SUPArchivedMetricReport : NSObject <NSCoding>
{
    NSString *_userEmail;
    CSHMHelpMobileRequest *_requestProto;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CSHMHelpMobileRequest *requestProto; // @synthesize requestProto=_requestProto;
@property(readonly, copy, nonatomic) NSString *userEmail; // @synthesize userEmail=_userEmail;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserEmail:(id)arg1 requestProto:(id)arg2;

@end

