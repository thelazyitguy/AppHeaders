//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface DSCNodeMap : NSObject
{
    NSMapTable *_nodeTable;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMapTable *nodeTable; // @synthesize nodeTable=_nodeTable;
- (id)nodeForContentKey:(id)arg1;
- (void)removeNode:(id)arg1;
- (_Bool)addNode:(id)arg1;
- (id)initPrivate;

@end
