//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AMIMonitorDCMReporter;

@interface AMIAAPICartServiceErrorManager : NSObject
{
    AMIMonitorDCMReporter *_dcmReporter;
}

@property(retain, nonatomic) AMIMonitorDCMReporter *dcmReporter; // @synthesize dcmReporter=_dcmReporter;
- (void).cxx_destruct;
- (id)errorWithCode:(unsigned long long)arg1;
- (void)logError:(unsigned long long)arg1;
- (void)setupReporter;
- (id)initWithReporter:(id)arg1;

@end
