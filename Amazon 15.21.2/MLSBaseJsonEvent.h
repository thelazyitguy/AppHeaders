//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MLSEvent.h"

@interface MLSBaseJsonEvent : MLSEvent
{
}

+ (id)getRandomId;
- (id)getJsonContent;
- (void)putFieldInJsondObject:(id)arg1 forKey:(id)arg2 andValue:(id)arg3;
- (id)serialize;
- (void)appendMetadata:(id)arg1;
- (_Bool)validate;

@end
