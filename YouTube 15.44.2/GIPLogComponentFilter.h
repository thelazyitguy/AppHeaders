//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/GIPLogFilter-Protocol.h>

@class NSString;

@interface GIPLogComponentFilter : NSObject <GIPLogFilter>
{
    NSString *_component;
}

- (void).cxx_destruct;
- (_Bool)allowLogMessage:(id)arg1;
- (id)initWithComponent:(id)arg1;

@end

