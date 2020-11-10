//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NFUIFlow, NSString;

@interface NFUIFlowSegue : NSObject
{
    NSString *_identifier;
    NFUIFlow *_sourceFlow;
    NFUIFlow *_destinationFlow;
    CDUnknownBlockType _performHandler;
}

+ (id)segueWithIdentifier:(id)arg1 source:(id)arg2 destination:(id)arg3 performHandler:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType performHandler; // @synthesize performHandler=_performHandler;
@property(retain, nonatomic) NFUIFlow *destinationFlow; // @synthesize destinationFlow=_destinationFlow;
@property(retain, nonatomic) NFUIFlow *sourceFlow; // @synthesize sourceFlow=_sourceFlow;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)perform;
- (id)initWithIdentifier:(id)arg1 source:(id)arg2 destination:(id)arg3;

@end
