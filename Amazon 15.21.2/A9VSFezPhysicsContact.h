//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol A9VSFezPhysicsContactable;

@interface A9VSFezPhysicsContact : NSObject
{
    unsigned long long _contactBeginCount;
    id <A9VSFezPhysicsContactable> _contactable;
    id <A9VSFezPhysicsContactable> _otherContactable;
}

@property(readonly, nonatomic) id <A9VSFezPhysicsContactable> otherContactable; // @synthesize otherContactable=_otherContactable;
@property(readonly, nonatomic) id <A9VSFezPhysicsContactable> contactable; // @synthesize contactable=_contactable;
@property(nonatomic) unsigned long long contactBeginCount; // @synthesize contactBeginCount=_contactBeginCount;
- (void).cxx_destruct;
- (_Bool)representsContact:(id)arg1;
- (_Bool)endContactIfContactEndedInPhysicsWorld:(id)arg1;
- (void)beginContact;
- (id)initWithContactable:(id)arg1 otherContactable:(id)arg2;
@property(readonly, nonatomic) unsigned long long contactIdentifier;

@end
