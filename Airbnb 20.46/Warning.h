//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface Warning : NSObject
{
    int _severity;
    NSString *_warningID;
    NSString *_message;
}

@property(nonatomic) int severity; // @synthesize severity=_severity;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *warningID; // @synthesize warningID=_warningID;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)initWithId:(id)arg1 message:(id)arg2 severity:(int)arg3;

@end
