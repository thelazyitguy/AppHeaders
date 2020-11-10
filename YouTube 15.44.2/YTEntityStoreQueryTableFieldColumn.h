//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTEntityStoreQueryTableColumn-Protocol.h>

@class NSArray, NSString;

@interface YTEntityStoreQueryTableFieldColumn : NSObject <YTEntityStoreQueryTableColumn>
{
    NSArray *_fieldPath;
    NSString *_name;
    unsigned long long _dataType;
    unsigned long long _indexOrder;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long indexOrder; // @synthesize indexOrder=_indexOrder;
@property(readonly, nonatomic) unsigned long long dataType; // @synthesize dataType=_dataType;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)columnValueForEntity:(id)arg1;
- (id)initWithName:(id)arg1 fieldPath:(id)arg2 indexOrder:(unsigned long long)arg3;
- (id)initWithName:(id)arg1 fieldPath:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

