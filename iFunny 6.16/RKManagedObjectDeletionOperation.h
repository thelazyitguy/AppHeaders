//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSManagedObjectContext, NSMutableSet;

@interface RKManagedObjectDeletionOperation : NSOperation
{
    NSManagedObjectContext *_managedObjectContext;
    NSMutableSet *_entityMappings;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *entityMappings; // @synthesize entityMappings=_entityMappings;
@property(retain, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
- (void)main;
- (void)addEntityMapping:(id)arg1;
- (id)initWithManagedObjectContext:(id)arg1;

@end
