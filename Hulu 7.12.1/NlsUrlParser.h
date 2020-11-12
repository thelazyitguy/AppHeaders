//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NlsLogger;
@protocol NlsUrlParserDelegate;

@interface NlsUrlParser : NSObject
{
    NlsLogger *_logger;
    NSMutableArray *_parsingErrors;
    id <NlsUrlParserDelegate> _delegate;
    NSMutableDictionary *_dictionaryVar;
}

@property(retain, nonatomic) NSMutableDictionary *dictionaryVar; // @synthesize dictionaryVar=_dictionaryVar;
@property(nonatomic) __weak id <NlsUrlParserDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *parsingErrors; // @synthesize parsingErrors=_parsingErrors;
@property __weak NlsLogger *logger; // @synthesize logger=_logger;
- (void).cxx_destruct;
- (id)resolveOR:(id)arg1;
- (id)evaluate:(id)arg1 optional:(_Bool *)arg2 withSuccess:(_Bool *)arg3;
- (int)findEnd:(id)arg1 limiter:(BOOL)arg2 startIndex:(long long)arg3;
- (id)parse:(id)arg1 withResult:(_Bool *)arg2;
- (_Bool)calculateVariable:(long long)arg1 offsetName:(id)arg2;
- (id)iagParamForKey:(id)arg1 withDefaultValue:(id)arg2;
- (id)processIagData;
- (id)valueForKey:(id)arg1;
- (_Bool)setValue:(id)arg1 forKey:(id)arg2;
- (void)addDictionary:(id)arg1;
@property(retain, nonatomic) NSDictionary *dictionary;
@property(readonly, nonatomic) NSArray *errors;
- (id)initWithLogger:(id)arg1;
- (id)initWithLogger:(id)arg1 delegate:(id)arg2;

@end
