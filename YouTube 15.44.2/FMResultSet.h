//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FMDatabase, FMStatement, NSDictionary, NSMutableDictionary, NSString;

@interface FMResultSet : NSObject
{
    NSMutableDictionary *_columnNameToIndexMap;
    FMDatabase *_parentDB;
    NSString *_query;
    FMStatement *_statement;
}

+ (id)resultSetWithStatement:(id)arg1 usingParentDatabase:(id)arg2;
- (void).cxx_destruct;
@property(retain) FMStatement *statement; // @synthesize statement=_statement;
@property(retain) NSString *query; // @synthesize query=_query;
@property(retain, nonatomic) FMDatabase *parentDB; // @synthesize parentDB=_parentDB;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)objectAtIndexedSubscript:(int)arg1;
- (id)columnNameForIndex:(int)arg1;
- (id)objectForColumn:(id)arg1;
- (id)objectForColumnName:(id)arg1;
- (id)objectForColumnIndex:(int)arg1;
- (const char *)UTF8StringForColumnName:(id)arg1;
- (const char *)UTF8StringForColumn:(id)arg1;
- (const char *)UTF8StringForColumnIndex:(int)arg1;
- (_Bool)columnIsNull:(id)arg1;
- (_Bool)columnIndexIsNull:(int)arg1;
- (id)dataNoCopyForColumnIndex:(int)arg1;
- (id)dataNoCopyForColumn:(id)arg1;
- (id)dataForColumnIndex:(int)arg1;
- (id)dataForColumn:(id)arg1;
- (id)dateForColumnIndex:(int)arg1;
- (id)dateForColumn:(id)arg1;
- (id)stringForColumn:(id)arg1;
- (id)stringForColumnIndex:(int)arg1;
- (double)doubleForColumnIndex:(int)arg1;
- (double)doubleForColumn:(id)arg1;
- (_Bool)boolForColumnIndex:(int)arg1;
- (_Bool)boolForColumn:(id)arg1;
- (unsigned long long)unsignedLongLongIntForColumnIndex:(int)arg1;
- (unsigned long long)unsignedLongLongIntForColumn:(id)arg1;
- (long long)longLongIntForColumnIndex:(int)arg1;
- (long long)longLongIntForColumn:(id)arg1;
- (long long)longForColumnIndex:(int)arg1;
- (long long)longForColumn:(id)arg1;
- (int)intForColumnIndex:(int)arg1;
- (int)intForColumn:(id)arg1;
- (int)columnIndexForName:(id)arg1;
- (_Bool)hasAnotherRow;
- (_Bool)nextWithError:(id *)arg1;
- (_Bool)next;
@property(readonly, nonatomic) NSDictionary *resultDictionary;
- (id)resultDict;
- (void)kvcMagic:(id)arg1;
@property(readonly) NSMutableDictionary *columnNameToIndexMap;
@property(readonly, nonatomic) int columnCount;
- (void)close;
- (void)dealloc;
- (id)pdl_numberForColumn:(id)arg1;

@end

