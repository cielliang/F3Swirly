//
//  F3Swirly.h
//  Copyright (c) 2012 by Brad Benson
//  All rights reserved.
//  
//  Redistribution and use in source and binary forms, with or without 
//  modification, are permitted provided that the following 
//  conditions are met:
//    1.  Redistributions of source code must retain the above copyright
//        notice this list of conditions and the following disclaimer.
//    2.  Redistributions in binary form must reproduce the above copyright 
//        notice, this list of conditions and the following disclaimer in 
//        the documentation and/or other materials provided with the 
//        distribution.
//  
//  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
//  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT 
//  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS 
//  FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE 
//  COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, 
//  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, 
//  BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS 
//  OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED 
//  AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
//  OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF 
//  THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY 
//  OF SUCH DAMAGE.
//

//---> Pick up required headers <-----------------------------------------
#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>


@class F3SwirlyThreshold;
@class F3SwirlyLayerDelegate;

//------------------------------------------------------------------------
//------------------------------------------------------------------------
//-------------------|  F3Swirly class definition  |----------------------
//------------------------------------------------------------------------
//------------------------------------------------------------------------
@interface F3Swirly : UILabel
{
  @private
    BOOL                      m_fRoundedSegments;   // true = segments have rounded ends
    CGFloat                   m_flValue,            // Current value being shown
                              m_flThickness;        // Thickness of swirly
    int                       m_iSegments;          // Number of segments
}

// Properties
@property (readwrite, nonatomic) CGFloat  value;      // Current value
@property (readwrite, nonatomic) CGFloat  thickness;  // Thickness of swirly
@property (readwrite, nonatomic) int      segments;   // Number of segments within swirly
@property (readwrite, nonatomic) BOOL     roundedSegments;  // Flag indicating if segments have rounded ends
@property (readwrite, nonatomic) CGFloat  arcShadowWidth;

// Public methods
- (void) addThreshold:(double)  a_flValue
            withColor:(UIColor *) a_color;
- (void) addThreshold:(double)  a_flValue
            withColor:(UIColor *) a_color
                  rpm:(int) a_iRpm
                label:(NSString *) a_strLabel;
- (void) addThreshold:(double)  a_flValue
            withColor:(UIColor *) a_color
                  rpm:(int) a_iRpm
                label:(NSString *) a_strLabel
             segments:(int) a_iSegments;


@end
