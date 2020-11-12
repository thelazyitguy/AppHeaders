//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FMDatabaseQueue, NSLocale, NSOperationQueue, NSString;
@protocol GKBArtDatabaseConfigurator;

@interface GKBArtDatabase : NSObject
{
    id <GKBArtDatabaseConfigurator> _config;
    NSOperationQueue *_operationQueue;
    NSString *_wildcardSearchTerm;
    FMDatabaseQueue *_queue;
    NSLocale *_locale;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(retain, nonatomic) FMDatabaseQueue *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSString *wildcardSearchTerm; // @synthesize wildcardSearchTerm=_wildcardSearchTerm;
- (void)closeQueue;
- (long long)executeScalarForQuery:(id)arg1;
- (void)executeSearch:(id)arg1 searchTerms:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)executeSearch:(id)arg1 searchTerm:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)executeSelect:(id)arg1 parameter:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)executeSelect:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithConfig:(id)arg1;

@end
