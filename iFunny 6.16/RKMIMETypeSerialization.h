//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface RKMIMETypeSerialization : NSObject
{
    NSMutableArray *_registrations;
}

+ (id)dataFromObject:(id)arg1 MIMEType:(id)arg2 error:(id *)arg3;
+ (id)objectFromData:(id)arg1 MIMEType:(id)arg2 error:(id *)arg3;
+ (id)registeredMIMETypes;
+ (void)unregisterClass:(Class)arg1;
+ (void)registerClass:(Class)arg1 forMIMEType:(id)arg2;
+ (Class)serializationClassForMIMEType:(id)arg1;
+ (id)sharedSerialization;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *registrations; // @synthesize registrations=_registrations;
- (void)addRegistrationsForKnownSerializations;
- (id)init;

@end
