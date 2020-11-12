//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QCRequestParameters.h"

@class NSString;

@interface ShowProductListParameters : QCRequestParameters
{
    NSString *storeId;
    NSString *catalogId;
    NSString *langId;
    NSString *TRANSACTION;
    NSString *prodlist;
    NSString *selProdSort;
    NSString *Output;
    NSString *programDate;
    NSString *timeZone;
    NSString *programTime;
    NSString *channelCode;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *channelCode; // @synthesize channelCode;
@property(copy, nonatomic) NSString *programTime; // @synthesize programTime;
@property(copy, nonatomic) NSString *timeZone; // @synthesize timeZone;
@property(copy, nonatomic) NSString *programDate; // @synthesize programDate;
@property(copy, nonatomic) NSString *Output; // @synthesize Output;
@property(copy, nonatomic) NSString *selProdSort; // @synthesize selProdSort;
@property(copy, nonatomic) NSString *prodlist; // @synthesize prodlist;
@property(copy, nonatomic) NSString *TRANSACTION; // @synthesize TRANSACTION;
@property(copy, nonatomic) NSString *langId; // @synthesize langId;
@property(copy, nonatomic) NSString *catalogId; // @synthesize catalogId;
@property(copy, nonatomic) NSString *storeId; // @synthesize storeId;
- (id)initWithStoreID:(id)arg1 withCatalogID:(id)arg2 withTime:(id)arg3 andProgrameDate:(id)arg4 sortOrder:(id)arg5 andChannelCode:(id)arg6;
- (id)initWithStoreID:(id)arg1 withCatalogID:(id)arg2 withTime:(id)arg3 andProgrameDate:(id)arg4 sortOrder:(id)arg5;

@end
