//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface TFSTwitterAPICapiCommandData : NSObject
{
    NSString *_capiPath;
    NSDictionary *_parameters;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(copy, nonatomic) NSString *capiPath; // @synthesize capiPath=_capiPath;
- (id)initWithCapiURLString:(id)arg1 parameters:(id)arg2;

@end
