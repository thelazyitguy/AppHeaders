//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TFNAdaptiveWizardFlow;

@interface TFNAdaptiveWizardStep : NSObject
{
    _Bool _evaluating;
    TFNAdaptiveWizardFlow *_wizardFlow;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool evaluating; // @synthesize evaluating=_evaluating;
@property(nonatomic) __weak TFNAdaptiveWizardFlow *wizardFlow; // @synthesize wizardFlow=_wizardFlow;
- (_Bool)shouldSkipWithController:(id)arg1;
- (void)evaluateWithController:(id)arg1;

@end

