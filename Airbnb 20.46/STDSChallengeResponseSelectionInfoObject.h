//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "STDSChallengeResponseSelectionInfo-Protocol.h"

@class NSString;

@interface STDSChallengeResponseSelectionInfoObject : NSObject <STDSChallengeResponseSelectionInfo>
{
    NSString *_name;
    NSString *_value;
}

+ (id)decodedObjectFromJSON:(id)arg1 error:(id *)arg2;
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1 value:(id)arg2;

@end
