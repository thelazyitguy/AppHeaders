//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AWSCore/AWSModel.h>

@class NSNumber;

@interface AWSIoTTaskStatistics : AWSModel
{
    NSNumber *_canceledChecks;
    NSNumber *_compliantChecks;
    NSNumber *_failedChecks;
    NSNumber *_inProgressChecks;
    NSNumber *_nonCompliantChecks;
    NSNumber *_totalChecks;
    NSNumber *_waitingForDataCollectionChecks;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSNumber *waitingForDataCollectionChecks; // @synthesize waitingForDataCollectionChecks=_waitingForDataCollectionChecks;
@property(retain, nonatomic) NSNumber *totalChecks; // @synthesize totalChecks=_totalChecks;
@property(retain, nonatomic) NSNumber *nonCompliantChecks; // @synthesize nonCompliantChecks=_nonCompliantChecks;
@property(retain, nonatomic) NSNumber *inProgressChecks; // @synthesize inProgressChecks=_inProgressChecks;
@property(retain, nonatomic) NSNumber *failedChecks; // @synthesize failedChecks=_failedChecks;
@property(retain, nonatomic) NSNumber *compliantChecks; // @synthesize compliantChecks=_compliantChecks;
@property(retain, nonatomic) NSNumber *canceledChecks; // @synthesize canceledChecks=_canceledChecks;
- (void).cxx_destruct;

@end
