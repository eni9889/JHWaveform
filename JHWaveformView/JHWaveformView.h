//
//  JHWaveformView.h
//  JHWaveformView
//
//  Created by Jamie Hardt on 10/3/12.
//  Copyright (c) 2012 Jamie Hardt. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JHWaveformView : NSView

@property (copy, readwrite) NSColor *foregroundColor, *lineColor, *backgroundColor;

-(void)setWaveform:(float*)samples length:(NSUInteger)length;

@end

