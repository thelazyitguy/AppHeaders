//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NlsErrorReporter, NlsUrlParser;
@protocol OS_dispatch_queue;

@interface NlsMappingDictionary : NSObject
{
    int _nRecursive;
    NSMutableDictionary *_vars;
    NSMutableDictionary *_mapping;
    NSObject<OS_dispatch_queue> *_dataGlobalsQueue;
    NlsUrlParser *_urlParser;
    NlsErrorReporter *_errorReporter;
}

@property __weak NlsErrorReporter *errorReporter; // @synthesize errorReporter=_errorReporter;
@property(retain) NlsUrlParser *urlParser; // @synthesize urlParser=_urlParser;
@property(nonatomic) int nRecursive; // @synthesize nRecursive=_nRecursive;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dataGlobalsQueue; // @synthesize dataGlobalsQueue=_dataGlobalsQueue;
@property(retain) NSMutableDictionary *mapping; // @synthesize mapping=_mapping;
@property(retain, nonatomic) NSMutableDictionary *vars; // @synthesize vars=_vars;
- (void).cxx_destruct;
- (id)getNameMapping;
- (void)updateMappingForKey:(id)arg1;
- (void)addMapping:(id)arg1 forName:(id)arg2;
- (void)updateVariablesWithMapping;
- (void)addMappingWithDictionary:(id)arg1;
- (void)setMappingWithDictionary:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)getDictionary;
- (void)setDictionary:(id)arg1;
- (void)dealloc;
- (id)initWithErrorReporter:(id)arg1;
- (id)initWithErrorReporter:(id)arg1 dictionary:(id)arg2;

@end
