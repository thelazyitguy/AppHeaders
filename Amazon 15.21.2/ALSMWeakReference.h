//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ALSMWeakReference : NSObject
{
    id nonretainedObjectValue;
    id originalObjectValue;
}

+ (id)weakReferenceWithObject:(id)arg1;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void *)originalObjectValue;
- (id)nonretainedObjectValue;
- (id)initWithObject:(id)arg1;

@end
