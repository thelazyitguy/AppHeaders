//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSError, NSNumber, NSString;

@interface GWAInstrumentManagerResult : NSObject
{
    _Bool _success;
    NSString *_cdpInstrumentID;
    NSNumber *_f1InstrumentID;
    NSData *_instrumentToken;
    NSData *_integratorDataToken;
    NSString *_cvcNumber;
    NSError *_error;
}

+ (id)resultWithError:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSString *cvcNumber; // @synthesize cvcNumber=_cvcNumber;
@property(readonly, nonatomic) NSData *integratorDataToken; // @synthesize integratorDataToken=_integratorDataToken;
@property(readonly, nonatomic) NSData *instrumentToken; // @synthesize instrumentToken=_instrumentToken;
@property(readonly, nonatomic) NSNumber *f1InstrumentID; // @synthesize f1InstrumentID=_f1InstrumentID;
@property(readonly, nonatomic) NSString *cdpInstrumentID; // @synthesize cdpInstrumentID=_cdpInstrumentID;
@property(readonly, nonatomic) _Bool success; // @synthesize success=_success;
- (id)initWithSuccess:(_Bool)arg1 cdpInstrumentID:(id)arg2 f1InstrumentID:(id)arg3 instrumentToken:(id)arg4 integratorDataToken:(id)arg5 cvcNumber:(id)arg6 error:(id)arg7;

@end
