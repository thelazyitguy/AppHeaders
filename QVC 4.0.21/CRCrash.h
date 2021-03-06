//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CRReportableEvent.h"

#import "CRGarbageCollection-Protocol.h"

@class CRSession, NSArray, NSData, NSString;

@interface CRCrash : CRReportableEvent <CRGarbageCollection>
{
}

+ (id)createRequestsForEvents:(id)arg1 appLocator:(id)arg2;
+ (id)garbageCollectionSortDescriptor;
+ (unsigned long long)garbageCollectionLowWaterMark;
+ (unsigned long long)garbageCollectionHighWaterMark;
+ (id)fetchRequest;
- (id)rateValueWithSettings:(id)arg1;
- (id)sendEventValueWithSettings:(id)arg1;
- (id)asJson;
- (id)architectureFromImageInfo:(id)arg1;
- (id)nameFromImageInfo:(id)arg1;
- (id)initWithCrashedSession:(id)arg1 previousSession:(id)arg2 crashReportData:(id)arg3;

// Remaining properties
@property(copy, nonatomic) NSString *binaryImageArchitecture; // @dynamic binaryImageArchitecture;
@property(copy, nonatomic) NSString *binaryImageName; // @dynamic binaryImageName;
@property(copy, nonatomic) NSString *binaryImageUUID; // @dynamic binaryImageUUID;
@property(retain, nonatomic) NSArray *breadcrumbs; // @dynamic breadcrumbs;
@property(retain, nonatomic) NSData *crashData; // @dynamic crashData;
@property(copy, nonatomic) NSString *exceptionName; // @dynamic exceptionName;
@property(copy, nonatomic) NSString *exceptionReason; // @dynamic exceptionReason;
@property(retain, nonatomic) CRSession *session; // @dynamic session;
@property(retain, nonatomic) NSArray *userflows; // @dynamic userflows;

@end

